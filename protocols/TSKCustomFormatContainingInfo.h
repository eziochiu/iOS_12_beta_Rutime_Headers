/* made by EzioChiu.
 */

@protocol TSKCustomFormatContainingInfo

@required

- (id)changeDetailsForCustomFormatListDidUpdateToCustomFormat:(TSUCustomFormat *)arg1;
- (void)reassignPasteboardCustomFormatKeys;
- (void)upgradeFormatsForCustomFormatListU2_0;

@end
