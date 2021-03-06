/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKWebServiceResponse : NSObject <NSSecureCoding> {
    id  _JSONObject;
    NSData * _rawData;
}

@property (nonatomic, readonly) id JSONObject;
@property (nonatomic, readonly) NSData *rawData;

+ (id)responseWithData:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)JSONObject;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)rawData;

@end
