/***********************************************************************************************************************
 *
 * API.AI iOS SDK - client-side libraries for API.AI
 * ==========================================
 *
 * Copyright (C) 2014 by Speaktoit, Inc. (https://www.speaktoit.com)
 * https://www.api.ai
 *
 ***********************************************************************************************************************
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with
 * the License. You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on
 * an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the
 * specific language governing permissions and limitations under the License.
 *
 ***********************************************************************************************************************/

#import <Foundation/Foundation.h>

#import "AIRequest+AIMappedResponse.h"

#import "AIResponseStatus.h"
#import "AIResponseResult.h"

@interface AIResponse : NSObject

- (instancetype)init __unavailable;
- (instancetype)initWithResponse:(id)responseObject;

@property(nonatomic, copy, readonly) NSString *identifier;
@property(nonatomic, copy, readonly) NSDate *timestamp;

@property(nonatomic, strong, readonly) AIResponseStatus *status;
@property(nonatomic, strong, readonly) AIResponseResult *result;

@end
