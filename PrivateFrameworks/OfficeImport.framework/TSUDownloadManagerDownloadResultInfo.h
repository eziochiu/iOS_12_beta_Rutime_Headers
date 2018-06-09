/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TSUDownloadManagerDownloadResultInfo : NSObject {
    NSError * _error;
    bool  _success;
}

@property (readonly) NSError *error;
@property (readonly) bool success;

- (void).cxx_destruct;
- (id)error;
- (id)init;
- (id)initWithSuccess:(bool)arg1 error:(id)arg2;
- (bool)success;

@end
