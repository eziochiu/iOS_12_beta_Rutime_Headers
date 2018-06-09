/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKCacheNode : NSObject {
    struct VKCacheKey { 
        unsigned int a; 
        unsigned int b; 
        unsigned int c; 
        unsigned int d; 
    }  _key;
    VKCacheNode * _next;
    VKCacheNode * _previous;
    id  _value;
}

@property (nonatomic) struct VKCacheKey { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } key;
@property (nonatomic, retain) VKCacheNode *next;
@property (nonatomic) VKCacheNode *previous;
@property (nonatomic, retain) id value;

- (void)dealloc;
- (struct VKCacheKey { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })key;
- (id)next;
- (id)previous;
- (void)setKey:(struct VKCacheKey { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })arg1;
- (void)setNext:(id)arg1;
- (void)setPrevious:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
