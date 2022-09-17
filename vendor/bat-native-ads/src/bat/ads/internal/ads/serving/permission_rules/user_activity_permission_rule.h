/* Copyright (c) 2020 The Brave Authors. All rights reserved.
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef BRAVE_VENDOR_BAT_NATIVE_ADS_SRC_BAT_ADS_INTERNAL_ADS_SERVING_PERMISSION_RULES_USER_ACTIVITY_PERMISSION_RULE_H_
#define BRAVE_VENDOR_BAT_NATIVE_ADS_SRC_BAT_ADS_INTERNAL_ADS_SERVING_PERMISSION_RULES_USER_ACTIVITY_PERMISSION_RULE_H_

#include <string>

#include "bat/ads/internal/ads/serving/permission_rules/permission_rule_interface.h"

namespace ads {

class UserActivityPermissionRule final : public PermissionRuleInterface {
 public:
  UserActivityPermissionRule();

  UserActivityPermissionRule(const UserActivityPermissionRule& other) = delete;
  UserActivityPermissionRule& operator=(const UserActivityPermissionRule&) =
      delete;

  UserActivityPermissionRule(UserActivityPermissionRule&& other) noexcept =
      delete;
  UserActivityPermissionRule& operator=(
      UserActivityPermissionRule&& other) noexcept = delete;

  ~UserActivityPermissionRule() override;

  bool ShouldAllow() override;

  const std::string& GetLastMessage() const override;

 private:
  bool DoesRespectCap();

  std::string last_message_;
};

}  // namespace ads

#endif  // BRAVE_VENDOR_BAT_NATIVE_ADS_SRC_BAT_ADS_INTERNAL_ADS_SERVING_PERMISSION_RULES_USER_ACTIVITY_PERMISSION_RULE_H_
