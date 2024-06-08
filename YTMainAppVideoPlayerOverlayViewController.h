#import "YTAdjustableAccessibilityProtocol.h"
#import "YTMainAppVideoPlayerOverlayView.h"
#import "YTResponder.h"
#import "YTVideoPlayerOverlayDelegate.h"

@interface YTMainAppVideoPlayerOverlayViewController : UIViewController <YTResponder, YTAdjustableAccessibilityProtocol>
- (YTMainAppVideoPlayerOverlayView *)videoPlayerOverlayView;
- (id <YTVideoPlayerOverlayDelegate>)delegate;
- (void)didPressVideoQuality:(id)arg;
- (BOOL)isFullscreen;
- (CGFloat)totalTime; // YTTapToSeek - https://github.com/bhackel/YTTapToSeek
@end
