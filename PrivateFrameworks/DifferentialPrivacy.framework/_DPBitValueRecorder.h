/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

@interface _DPBitValueRecorder : NSObject {
    <_DPDataRecorder><_DPDataRecorderKeyProperties> * _recorder;
}

@property (nonatomic, readonly) <_DPDataRecorder><_DPDataRecorderKeyProperties> *recorder;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithKey:(id)arg1;
- (id)initWithKey:(id)arg1 databaseDirectoryPath:(id)arg2 readOnly:(bool)arg3;
- (bool)record:(id)arg1;
- (id)recorder;

@end
