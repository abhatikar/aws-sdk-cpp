﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/KMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace KMS
{
namespace Model
{

  /**
   */
  class AWS_KMS_API DisableKeyRequest : public KMSRequest
  {
  public:
    DisableKeyRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>A unique identifier for the CMK.</p> <p>Use the CMK's unique identifier or
     * its Amazon Resource Name (ARN). For example:</p> <ul> <li> <p>Unique ID:
     * 1234abcd-12ab-34cd-56ef-1234567890ab</p> </li> <li> <p>ARN:
     * arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</p>
     * </li> </ul>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>A unique identifier for the CMK.</p> <p>Use the CMK's unique identifier or
     * its Amazon Resource Name (ARN). For example:</p> <ul> <li> <p>Unique ID:
     * 1234abcd-12ab-34cd-56ef-1234567890ab</p> </li> <li> <p>ARN:
     * arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</p>
     * </li> </ul>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>A unique identifier for the CMK.</p> <p>Use the CMK's unique identifier or
     * its Amazon Resource Name (ARN). For example:</p> <ul> <li> <p>Unique ID:
     * 1234abcd-12ab-34cd-56ef-1234567890ab</p> </li> <li> <p>ARN:
     * arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</p>
     * </li> </ul>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = std::move(value); }

    /**
     * <p>A unique identifier for the CMK.</p> <p>Use the CMK's unique identifier or
     * its Amazon Resource Name (ARN). For example:</p> <ul> <li> <p>Unique ID:
     * 1234abcd-12ab-34cd-56ef-1234567890ab</p> </li> <li> <p>ARN:
     * arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</p>
     * </li> </ul>
     */
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }

    /**
     * <p>A unique identifier for the CMK.</p> <p>Use the CMK's unique identifier or
     * its Amazon Resource Name (ARN). For example:</p> <ul> <li> <p>Unique ID:
     * 1234abcd-12ab-34cd-56ef-1234567890ab</p> </li> <li> <p>ARN:
     * arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</p>
     * </li> </ul>
     */
    inline DisableKeyRequest& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>A unique identifier for the CMK.</p> <p>Use the CMK's unique identifier or
     * its Amazon Resource Name (ARN). For example:</p> <ul> <li> <p>Unique ID:
     * 1234abcd-12ab-34cd-56ef-1234567890ab</p> </li> <li> <p>ARN:
     * arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</p>
     * </li> </ul>
     */
    inline DisableKeyRequest& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the CMK.</p> <p>Use the CMK's unique identifier or
     * its Amazon Resource Name (ARN). For example:</p> <ul> <li> <p>Unique ID:
     * 1234abcd-12ab-34cd-56ef-1234567890ab</p> </li> <li> <p>ARN:
     * arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</p>
     * </li> </ul>
     */
    inline DisableKeyRequest& WithKeyId(const char* value) { SetKeyId(value); return *this;}

  private:
    Aws::String m_keyId;
    bool m_keyIdHasBeenSet;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
