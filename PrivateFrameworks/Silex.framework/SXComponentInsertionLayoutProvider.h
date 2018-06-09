/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXComponentInsertionLayoutProvider : NSObject <SXComponentInsertionLayoutProvider> {
    SXLayoutBlueprint * _layoutBlueprint;
    SXLayoutDataProvider * _layoutDataProvider;
}

@property (nonatomic, readonly) SXColumnLayout *columnLayout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } documentSize;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SXLayoutBlueprint *layoutBlueprint;
@property (nonatomic, readonly) SXLayoutDataProvider *layoutDataProvider;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } viewportSize;

- (void).cxx_destruct;
- (id)columnLayout;
- (struct CGSize { double x1; double x2; })documentSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForComponent:(id)arg1;
- (id)initWithBlueprint:(id)arg1 layoutDataProvider:(id)arg2;
- (id)layoutBlueprint;
- (id)layoutDataProvider;
- (id)suggestedMarginForMarker:(id)arg1;
- (struct CGSize { double x1; double x2; })viewportSize;

@end
