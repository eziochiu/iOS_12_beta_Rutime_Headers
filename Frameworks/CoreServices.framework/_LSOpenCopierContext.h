/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface _LSOpenCopierContext : NSObject {
    int  _callbackType;
    NSURL * _destURL;
    NSError * _error;
}

@property (nonatomic) int callbackType;
@property (nonatomic, retain) NSURL *destURL;
@property (nonatomic, retain) NSError *error;

- (int)callbackType;
- (void)dealloc;
- (id)destURL;
- (id)error;
- (void)setCallbackType:(int)arg1;
- (void)setDestURL:(id)arg1;
- (void)setError:(id)arg1;

@end
