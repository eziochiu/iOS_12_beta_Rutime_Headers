/* made by EzioChiu.
 */

@protocol SearchUIRowModel <NSObject, SearchUIDragObject>

@required

- (SFCardSection *)cardSection;
- (SFSearchResult *)identifyingResult;
- (bool)isTappable;
- (double)leadingSeparatorImageInset;
- (SFCard *)nextCard;
- (NSArray *)punchouts;
- (NSString *)reuseIdentifier;
- (int)separatorStyle;
- (Class)viewClass;

@end
