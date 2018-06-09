/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
 */

@interface NFContainerPoolObject : NSObject {
    unsigned long long  _ownership;
    id  _strongObject;
    id  _weakObject;
}

@property (nonatomic, readonly) id object;
@property (nonatomic, readonly) unsigned long long ownership;
@property (nonatomic, readonly) id strongObject;
@property (nonatomic, readonly) id weakObject;

- (void).cxx_destruct;
- (id)initWithObject:(id)arg1 ownership:(unsigned long long)arg2;
- (id)object;
- (unsigned long long)ownership;
- (id)strongObject;
- (id)weakObject;

@end
