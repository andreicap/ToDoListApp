//
//  RWData.m
//  Lab3IDE
//
//  Created by andrew on 6/6/14.
//
//

#import "RWData.h"

@implementation RWData
@synthesize title = _title;
@synthesize rating = _rating;

- (id)initWithTitle:(NSString*)title rating:(float)rating {
    if ((self = [super init])) {
        self.title = title;
        self.rating = rating;
    }
    return self;
}
@end
