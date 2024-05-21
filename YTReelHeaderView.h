#import <UIKit/UIKit.h>
#import "YTResponder.h"
#import "YTReelHeaderDelegate.h"
#import "YTReelTransparentStackView.h"

@interface YTReelHeaderView : UIViewController <YTResponder>
@property (nonatomic, strong) id<YTReelHeaderDelegate> delegate;
@property (nonatomic, strong) YTReelTransparentStackView *leftStackView;
@property (nonatomic, strong) YTReelTransparentStackView *rightStackView;
- (void)addLeftStackView:(id)view toView:(id)view;
- (void)addRightStackView:(id)view toView:(id)view;
- (id<YTReelHeaderDelegate>)delegate;
- (void)setDelegate:(id<YTReelHeaderDelegate>)delegate;
// - (YTQTMButton *)createButton:(NSString *)tweakId accessibilityLabel:(NSString *)label selector:(SEL)selector;
@end
