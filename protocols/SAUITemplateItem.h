/* made by EzioChiu.
 */

@protocol SAUITemplateItem <SAAceSerializable>

@required

- (NSArray *)communicationOptions;
- (SAUITemplateEdgeInsets *)fullScreenPaddingDelta;
- (bool)hasPriorityLayout;
- (SAUITemplateEdgeInsets *)padding;
- (NSArray *)presentationOptions;
- (void)setCommunicationOptions:(NSArray *)arg1;
- (void)setFullScreenPaddingDelta:(SAUITemplateEdgeInsets *)arg1;
- (void)setHasPriorityLayout:(bool)arg1;
- (void)setPadding:(SAUITemplateEdgeInsets *)arg1;
- (void)setPresentationOptions:(NSArray *)arg1;
- (void)setShouldBeOffscreenInPartial:(bool)arg1;
- (bool)shouldBeOffscreenInPartial;

@end
