/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXContainerComponentBlueprint : SXComponentBlueprint {
    SXLayoutBlueprint * _layoutBlueprint;
    SXLayoutBlueprint * _parentLayoutBlueprint;
}

@property (nonatomic, retain) SXLayoutBlueprint *layoutBlueprint;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)layoutBlueprint;
- (id)parentLayoutBlueprint;
- (void)setLayoutBlueprint:(id)arg1;
- (void)setParentLayoutBlueprint:(id)arg1;

@end
