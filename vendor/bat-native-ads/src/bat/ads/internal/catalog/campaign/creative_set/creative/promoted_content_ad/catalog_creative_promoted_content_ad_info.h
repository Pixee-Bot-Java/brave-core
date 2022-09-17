/* Copyright (c) 2020 The Brave Authors. All rights reserved.
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef BRAVE_VENDOR_BAT_NATIVE_ADS_SRC_BAT_ADS_INTERNAL_CATALOG_CAMPAIGN_CREATIVE_SET_CREATIVE_PROMOTED_CONTENT_AD_CATALOG_CREATIVE_PROMOTED_CONTENT_AD_INFO_H_
#define BRAVE_VENDOR_BAT_NATIVE_ADS_SRC_BAT_ADS_INTERNAL_CATALOG_CAMPAIGN_CREATIVE_SET_CREATIVE_PROMOTED_CONTENT_AD_CATALOG_CREATIVE_PROMOTED_CONTENT_AD_INFO_H_

#include <vector>

#include "bat/ads/internal/catalog/campaign/creative_set/creative/catalog_creative_info.h"
#include "bat/ads/internal/catalog/campaign/creative_set/creative/promoted_content_ad/catalog_promoted_content_ad_payload_info.h"

namespace ads {

struct CatalogCreativePromotedContentAdInfo final : CatalogCreativeInfo {
  CatalogCreativePromotedContentAdInfo();

  CatalogCreativePromotedContentAdInfo(
      const CatalogCreativePromotedContentAdInfo& other);
  CatalogCreativePromotedContentAdInfo& operator=(
      const CatalogCreativePromotedContentAdInfo& other);

  CatalogCreativePromotedContentAdInfo(
      CatalogCreativePromotedContentAdInfo&& other) noexcept;
  CatalogCreativePromotedContentAdInfo& operator=(
      CatalogCreativePromotedContentAdInfo&& other) noexcept;

  ~CatalogCreativePromotedContentAdInfo();

  bool operator==(const CatalogCreativePromotedContentAdInfo& rhs) const;
  bool operator!=(const CatalogCreativePromotedContentAdInfo& rhs) const;

  CatalogPromotedContentAdPayloadInfo payload;
};

using CatalogCreativePromotedContentAdList =
    std::vector<CatalogCreativePromotedContentAdInfo>;

}  // namespace ads

#endif  // BRAVE_VENDOR_BAT_NATIVE_ADS_SRC_BAT_ADS_INTERNAL_CATALOG_CAMPAIGN_CREATIVE_SET_CREATIVE_PROMOTED_CONTENT_AD_CATALOG_CREATIVE_PROMOTED_CONTENT_AD_INFO_H_
