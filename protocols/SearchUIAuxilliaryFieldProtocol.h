/* made by EzioChiu.
 */

@protocol SearchUIAuxilliaryFieldProtocol <NSObject>

@required

- (SFActionItem *)action;
- (NSString *)auxiliaryBottomText;
- (int)auxiliaryBottomTextColor;
- (NSString *)auxiliaryMiddleText;
- (NSString *)auxiliaryTopText;
- (SFCard *)card;
- (SFSearchResult *)identifyingResult;
- (SFImage *)thumbnail;
- (SFRichText *)title;

@end
