/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DScenePropertyAccessor : NSObject <TSCHUnretainedParent> {
    TSCH3DScene * mScene;
}

@property (nonatomic, readonly) TSCH3DScene *scene;

+ (id)accessorWithScene:(id)arg1;

- (void)clearParent;
- (void)dealloc;
- (id)initWithScene:(id)arg1;
- (id)scene;

@end
