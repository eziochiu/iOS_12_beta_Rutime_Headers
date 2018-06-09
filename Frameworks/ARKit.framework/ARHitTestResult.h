/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARHitTestResult : NSObject {
    ARAnchor * _anchor;
    double  _distance;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _localTransform;
    unsigned long long  _type;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _worldTransform;
}

@property (nonatomic, retain) ARAnchor *anchor;
@property (nonatomic) double distance;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } localTransform;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } worldTransform;

- (void).cxx_destruct;
- (id)_description:(bool)arg1;
- (id)anchor;
- (id)debugQuickLookObject;
- (id)description;
- (double)distance;
- (id)initWithType:(unsigned long long)arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })localTransform;
- (void)setAnchor:(id)arg1;
- (void)setDistance:(double)arg1;
- (void)setLocalTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setWorldTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (unsigned long long)type;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })worldTransform;

@end
