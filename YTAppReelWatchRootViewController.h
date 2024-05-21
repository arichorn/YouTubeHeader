#import "YTReelHeaderView.h"
#import "YTResponder.h"
#import "YTReelHeaderDelegate.h"

@interface YTAppReelWatchRootViewController : UIViewController <YTResponder>
- (id <YTReelHeaderDelegate>)delegate;
- (void)didPressVideoQuality:(id)arg;
@end
