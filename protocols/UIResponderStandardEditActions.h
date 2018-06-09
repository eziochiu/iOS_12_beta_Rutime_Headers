/* made by EzioChiu.
 */

@protocol UIResponderStandardEditActions <NSObject>

@optional

- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)decreaseSize:(id)arg1;
- (void)delete:(id)arg1;
- (void)increaseSize:(id)arg1;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;
- (void)paste:(id)arg1;
- (void)select:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)toggleBoldface:(id)arg1;
- (void)toggleItalics:(id)arg1;
- (void)toggleUnderline:(id)arg1;

@end
