#import <Foundation/Foundation.h>

@class RWData;

@interface RWDoc : NSObject

@property (strong) RWData *data;
@property (strong) UIImage *thumbImage;
@property (strong) UIImage *fullImage;

- (id)initWithTitle:(NSString*)title rating:(float)rating thumbImage:(UIImage *)thumbImage fullImage:(UIImage *)fullImage;

@end