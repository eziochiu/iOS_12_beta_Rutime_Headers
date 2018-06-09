/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface _HFSetContainer : NSObject {
    id /* block */  _comparator;
    id /* block */  _hashGenerator;
    unsigned long long  _index;
    id  _object;
}

@property (nonatomic, copy) id /* block */ comparator;
@property (nonatomic, copy) id /* block */ hashGenerator;
@property (nonatomic) unsigned long long index;
@property (nonatomic, retain) id object;

+ (id)containerWithObject:(id)arg1 atIndex:(unsigned long long)arg2 comparator:(id /* block */)arg3 hashGenerator:(id /* block */)arg4;

- (void).cxx_destruct;
- (id /* block */)comparator;
- (unsigned long long)hash;
- (id /* block */)hashGenerator;
- (unsigned long long)index;
- (bool)isEqual:(id)arg1;
- (id)object;
- (void)setComparator:(id /* block */)arg1;
- (void)setHashGenerator:(id /* block */)arg1;
- (void)setIndex:(unsigned long long)arg1;
- (void)setObject:(id)arg1;

@end
