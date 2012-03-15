//
//  DataModel.h
//  Checklists
//
//  Created by Bhagat Kadiyala on 2/11/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DataModel : NSObject

@property (nonatomic, strong) NSMutableArray *lists;

- (void)saveChecklists;
- (int)indexOfSelectedChecklist;
- (void)setIndexOfSelectedChecklist:(int)index;
- (void)sortChecklists;
+ (int)nextChecklistItemId;

@end
