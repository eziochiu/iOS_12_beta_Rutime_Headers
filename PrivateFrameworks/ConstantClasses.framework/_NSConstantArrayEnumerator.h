/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ConstantClasses.framework/ConstantClasses
 */

@interface _NSConstantArrayEnumerator : NSEnumerator {
    unsigned long long  capacity;
    unsigned long long  index;
    id * objects;
}

- (id)allObjects;
- (id)initWithArray:(id*)arg1 capacity:(unsigned long long)arg2;
- (id)nextObject;

@end
