/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSGenerationToken : NSObject <NSSecureCoding> {
    long long  _generation;
    long long  _origin;
    NSString * _storeIdentifier;
}

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)generation;
- (id)initForStore:(id)arg1 origin:(long long)arg2 generation:(long long)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithStoreIdentifier:(id)arg1 origin:(long long)arg2 generation:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isReferencingStore:(id)arg1;
- (long long)origin;
- (id)storeIdentifier;

@end
