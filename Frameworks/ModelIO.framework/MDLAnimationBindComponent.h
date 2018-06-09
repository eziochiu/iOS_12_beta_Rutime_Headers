/* made by EzioChiu
   Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

@interface MDLAnimationBindComponent : NSObject <MDLComponent, NSCopying> {
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _geometryBindTransform;
    <MDLJointAnimation> * _jointAnimation;
    NSArray * _jointPaths;
    MDLSkeleton * _skeleton;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } geometryBindTransform;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <MDLJointAnimation> *jointAnimation;
@property (nonatomic, retain) NSArray *jointPaths;
@property (nonatomic, retain) MDLSkeleton *skeleton;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })geometryBindTransform;
- (id)jointAnimation;
- (id)jointPaths;
- (void)setGeometryBindTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setJointAnimation:(id)arg1;
- (void)setJointPaths:(id)arg1;
- (void)setSkeleton:(id)arg1;
- (id)skeleton;

@end
