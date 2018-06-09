/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CLNotifierData : NSObject {
    void * _data;
    id /* block */  _destructor;
}

@property (nonatomic) void*data;
@property (nonatomic, copy) id /* block */ destructor;

- (void).cxx_destruct;
- (void*)data;
- (void)dealloc;
- (id /* block */)destructor;
- (id)initWithData:(void*)arg1 destructor:(id /* block */)arg2;
- (void)invalidate;
- (void)setData:(void*)arg1;
- (void)setDestructor:(id /* block */)arg1;

@end
