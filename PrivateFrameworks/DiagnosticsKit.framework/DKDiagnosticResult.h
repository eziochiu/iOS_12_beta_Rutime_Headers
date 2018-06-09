/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

@interface DKDiagnosticResult : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSDictionary * _data;
    NSArray * _files;
    NSNumber * _statusCode;
}

@property (nonatomic, readonly) NSDictionary *data;
@property (nonatomic, readonly) NSArray *files;
@property (nonatomic, readonly) NSNumber *statusCode;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)files;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMutableResult:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)statusCode;

@end
