/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI
 */

@interface MTUIRenderedHandViewFactory : NSObject {
    bool  _allowCaching;
    NSMutableDictionary * _angleCache;
    NSString * _imagePath;
    struct CGPoint { 
        double x; 
        double y; 
    }  _offset;
    struct CGPDFPage { } * _page;
    unsigned long long  _registeredClientsCount;
    NSBundle * _resourcesBundle;
    struct CGSize { 
        double width; 
        double height; 
    }  _scale;
    struct CGSize { 
        double width; 
        double height; 
    }  _viewSize;
}

@property (nonatomic, readonly) bool allowCaching;
@property (nonatomic, readonly) NSString *key;
@property (nonatomic) unsigned long long registeredClientsCount;

+ (void)flushAllCaches;
+ (id)keyForBundle:(id)arg1 imagePath:(id)arg2 offset:(struct CGPoint { double x1; double x2; })arg3 scale:(struct CGSize { double x1; double x2; })arg4;
+ (id)registerForFactoryWithBundle:(id)arg1 imagePath:(id)arg2 offset:(struct CGPoint { double x1; double x2; })arg3 scale:(struct CGSize { double x1; double x2; })arg4 allowCaching:(bool)arg5;
+ (void)unregisterForFactory:(id)arg1;

- (void).cxx_destruct;
- (bool)allowCaching;
- (void)dealloc;
- (void)flushCache;
- (id)imageForAngle:(double)arg1 viewSize:(struct CGSize { double x1; double x2; })arg2;
- (id)initWithBundle:(id)arg1 imagePath:(id)arg2 offset:(struct CGPoint { double x1; double x2; })arg3 scale:(struct CGSize { double x1; double x2; })arg4 allowCaching:(bool)arg5;
- (id)key;
- (unsigned long long)registeredClientsCount;
- (id)renderImageForAngle:(double)arg1 viewSize:(struct CGSize { double x1; double x2; })arg2;
- (void)setRegisteredClientsCount:(unsigned long long)arg1;

@end
