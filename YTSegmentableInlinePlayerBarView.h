#import "YTPlayerViewController.h"

@interface YTSegmentableInlinePlayerBarView : UIView
@property (nonatomic, assign, readwrite) BOOL enableSnapToChapter;
@property (nonatomic, readonly, assign) CGFloat totalTime;
@property (nonatomic, readwrite, strong) YTPlayerViewController *playerViewController;
@end
