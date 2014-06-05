//
//  RWData.h
//  Lab3IDE
//
//  Created by andrew on 6/6/14.
//
//

#import <Foundation/Foundation.h>

@interface RWData : NSObject

@property (strong) NSString *title;
@property (assign) float rating;

- (id)initWithTitle:(NSString*)title rating:(float)rating;

@end
