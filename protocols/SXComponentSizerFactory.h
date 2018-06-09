/* made by EzioChiu.
 */

@protocol SXComponentSizerFactory <SXComponentTypeDescribing>

@required

- (SXComponentSizer *)sizerForComponent:(id <SXComponent>)arg1 componentLayout:(id <SXComponentLayout>)arg2 layoutAttributes:(SXLayoutAttributes *)arg3;

@end
