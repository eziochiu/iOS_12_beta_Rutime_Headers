/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FMClient.framework/FMClient
 */

@interface FMClient.SearchResult : NSObject <NSSecureCoding> {
    void devices;
    void resultCode;
}

@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, copy) NSArray *devices;
@property (nonatomic) long long resultCode;

+ (bool)supportsSecureCoding;

- (id /* block */).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)devices;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (long long)resultCode;
- (void)setDevices:(id)arg1;
- (void)setResultCode:(long long)arg1;

@end
