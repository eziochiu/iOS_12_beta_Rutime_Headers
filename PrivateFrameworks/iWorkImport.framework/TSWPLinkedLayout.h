/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPLinkedLayout : TSWPLayout

@property (nonatomic, retain) TSWPLayoutManager *layoutManager;
@property (nonatomic) bool textLayoutValid;

- (void)i_validateTextLayout;
- (bool)isLastTarget;
- (bool)isLinked;
- (bool)isOverflowing;
- (id)layoutManager;
- (id)nextTargetFirstColumn;
- (id)nextTargetTopicNumbers;
- (bool)optimizeSegmentationOfEmptyLines;
- (id)previousTargetLastColumn;
- (id)previousTargetTopicNumbers;
- (bool)repShouldPreventCaret;
- (void)setLayoutManager:(id)arg1;
- (void)setTextLayoutValid:(bool)arg1;
- (void)validate;
- (void)willBeRemovedFromLayoutController:(id)arg1;

@end
