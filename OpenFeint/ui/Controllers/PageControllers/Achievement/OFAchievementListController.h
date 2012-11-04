//  Copyright 2009-2010 Aurora Feint, Inc.
// 
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//  
//  	http://www.apache.org/licenses/LICENSE-2.0
//  	
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.

#pragma once

#import "OFTableSequenceControllerHelper.h"
#import "OFProfileFrame.h"

@class OFPlayedGame;
@class OFUser;

@interface OFAchievementListController : OFTableSequenceControllerHelper< OFProfileFrame >
{
@package
	NSString* applicationName;
	NSString* applicationId;
	NSString* applicationIconUrl;
	BOOL doesUserHaveApplication;
	OFTableCellHelper* achievementProgressionListLeading;
}

@property (nonatomic, retain) NSString* applicationName;
@property (nonatomic, retain) NSString* applicationId;
@property (nonatomic, retain) NSString* applicationIconUrl;
@property (nonatomic) BOOL doesUserHaveApplication;
@property (nonatomic, retain) OFTableCellHelper* achievementProgressionListLeading;

- (void)populateContextualDataFromPlayedGame:(OFPlayedGame*)playedGame;
- (void)postPushAchievementListController;

@end