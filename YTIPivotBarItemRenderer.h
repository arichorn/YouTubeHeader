#import "YTICommand.h"

@interface YTIPivotBarItemRenderer : NSObject
@property (nonatomic, copy, readwrite) NSString *targetId;
@property (nonatomic, copy) NSArray *tabItems;
- (NSString *)pivotIdentifier;
- (YTICommand *)navigationEndpoint;
- (void)setNavigationEndpoint:(YTICommand *)navigationEndpoint;
@end
