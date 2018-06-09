/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGMessageKey : NSObject <SGEntityKey> {
    NSString * _source;
    NSString * _uniqueIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *source;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueIdentifier;

+ (bool)isSupportedEntityType:(long long)arg1;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithSerialized:(id)arg1;
- (id)initWithSource:(id)arg1 uniqueIdentifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToMessageKey:(id)arg1;
- (id)serialize;
- (id)source;
- (id)uniqueIdentifier;

@end
