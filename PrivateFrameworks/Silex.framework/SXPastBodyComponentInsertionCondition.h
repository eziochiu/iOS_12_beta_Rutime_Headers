/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXPastBodyComponentInsertionCondition : NSObject <SXComponentInsertionCondition> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _firstBodyComponentThreshold;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGPoint { double x1; double x2; } firstBodyComponentThreshold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)findFirstBodyComponentInComponents:(id)arg1;
- (struct CGPoint { double x1; double x2; })firstBodyComponentThreshold;
- (void)prepareWithComponents:(id)arg1 layoutProvider:(id)arg2;
- (void)setFirstBodyComponentThreshold:(struct CGPoint { double x1; double x2; })arg1;
- (bool)validateMarker:(id)arg1 componentTraits:(unsigned long long)arg2 layoutProvider:(id)arg3;

@end
