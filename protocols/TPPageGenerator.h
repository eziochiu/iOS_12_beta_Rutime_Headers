/* made by EzioChiu.
 */

@protocol TPPageGenerator <NSObject>

@required

- (void)createOrUpdatePageHintInSectionHint:(TPSectionHint *)arg1 withState:(TPPageLayoutState *)arg2;
- (bool)wantsPageInSectionHint:(TPSectionHint *)arg1 withState:(TPPageLayoutState *)arg2;

@end
