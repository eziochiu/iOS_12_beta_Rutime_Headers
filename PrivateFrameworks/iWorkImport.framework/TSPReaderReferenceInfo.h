/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPReaderReferenceInfo : NSObject {
    long long  _componentIdentifier;
    long long  _objectIdentifier;
}

@property (nonatomic, readonly) long long componentIdentifier;
@property (nonatomic, readonly) long long objectIdentifier;

+ (id)newReferenceInfoWithObjectIdentifier:(long long)arg1 componentIdentifier:(long long)arg2;

- (long long)componentIdentifier;
- (id)init;
- (id)initWithObjectIdentifier:(long long)arg1 componentIdentifier:(long long)arg2;
- (long long)objectIdentifier;

@end
