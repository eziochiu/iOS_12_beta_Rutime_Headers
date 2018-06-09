/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKSecureCodedUserDefaultsObject : CRKUserDefaultsObject {
    NSSet * _classes;
}

@property (nonatomic, readonly, copy) NSSet *classes;

- (void).cxx_destruct;
- (id)classes;
- (id)initWithDefaults:(id)arg1 key:(id)arg2;
- (id)initWithDefaults:(id)arg1 key:(id)arg2 classes:(id)arg3;
- (id)initWithKey:(id)arg1 classes:(id)arg2;
- (void)setValue:(id)arg1;
- (bool)setValue:(id)arg1 error:(id*)arg2;
- (id)value;
- (id)valueWithError:(id*)arg1;

@end
