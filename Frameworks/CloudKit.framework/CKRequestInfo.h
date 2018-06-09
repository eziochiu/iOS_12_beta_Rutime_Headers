/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKRequestInfo : NSObject <NSSecureCoding> {
    NSString * _requestUUID;
    NSDictionary * _responseHTTPHeaders;
    NSDictionary * _w3cNavigationTiming;
}

@property (nonatomic, readonly) NSString *requestUUID;
@property (nonatomic, readonly) NSDictionary *responseHTTPHeaders;
@property (nonatomic, readonly) NSDictionary *w3cNavigationTiming;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestUUID:(id)arg1 responseHTTPHeaders:(id)arg2 w3cTiming:(id)arg3;
- (id)requestUUID;
- (id)responseHTTPHeaders;
- (id)w3cNavigationTiming;

@end
