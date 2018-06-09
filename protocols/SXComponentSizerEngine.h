/* made by EzioChiu.
 */

@protocol SXComponentSizerEngine <NSObject>

@required

- (void)addFactory:(id <SXComponentSizerFactory>)arg1;
- (void)removeFactory:(id <SXComponentSizerFactory>)arg1;
- (SXComponentSizer *)sizerForComponent:(id <SXComponent>)arg1 componentLayout:(id <SXComponentLayout>)arg2 layoutAttributes:(SXLayoutAttributes *)arg3;

@end
