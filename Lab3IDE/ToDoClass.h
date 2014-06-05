//
//  ToDoItem.h
//  ToDoList
//
//  Created by Ronnie Chang on 2014-04-07.
//  Copyright (c) 2014 Ronnie Chang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
