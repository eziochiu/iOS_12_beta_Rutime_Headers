/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

@interface DKMutableDiagnosticResult : DKDiagnosticResult {
    NSDictionary * _data;
    NSArray * _files;
    NSNumber * _statusCode;
}

@property (nonatomic, retain) NSDictionary *data;
@property (nonatomic, retain) NSArray *files;
@property (nonatomic, retain) NSNumber *statusCode;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)files;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setData:(id)arg1;
- (void)setFiles:(id)arg1;
- (void)setStatusCode:(id)arg1;
- (id)statusCode;

@end
