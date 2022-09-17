/* Copyright (c) 2019 The Brave Authors. All rights reserved.
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef BRAVE_VENDOR_BAT_NATIVE_ADS_SRC_BAT_ADS_INTERNAL_ADS_AD_EVENTS_NOTIFICATION_ADS_NOTIFICATION_AD_EVENT_CLICKED_H_
#define BRAVE_VENDOR_BAT_NATIVE_ADS_SRC_BAT_ADS_INTERNAL_ADS_AD_EVENTS_NOTIFICATION_ADS_NOTIFICATION_AD_EVENT_CLICKED_H_

#include "bat/ads/internal/ads/ad_events/ad_event_interface.h"

namespace ads {

struct NotificationAdInfo;

namespace notification_ads {

class AdEventClicked final : public AdEventInterface<NotificationAdInfo> {
 public:
  AdEventClicked();

  AdEventClicked(const AdEventClicked& other) = delete;
  AdEventClicked& operator=(const AdEventClicked& other) = delete;

  AdEventClicked(AdEventClicked&& other) noexcept = delete;
  AdEventClicked& operator=(AdEventClicked&& other) noexcept = delete;

  ~AdEventClicked() override;

  void FireEvent(const NotificationAdInfo& ad) override;
};

}  // namespace notification_ads
}  // namespace ads

#endif  // BRAVE_VENDOR_BAT_NATIVE_ADS_SRC_BAT_ADS_INTERNAL_ADS_AD_EVENTS_NOTIFICATION_ADS_NOTIFICATION_AD_EVENT_CLICKED_H_
