/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWInferenceScheduler : NSObject {
    NSMapTable * _connectionsByIdentifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _connectionsLock;
}

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (int)performInferencesForConnection:(unsigned long long)arg1 usingInputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 attachingResultsToSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg3;
- (int)prepareForInferenceRequirements:(id)arg1 dependencyProviderSource:(id)arg2 formatProvider:(id)arg3 pixelBufferPoolProvider:(id)arg4 connection:(unsigned long long)arg5;
- (unsigned long long)registerInferenceConnection;
- (void)unregisterInferenceConnection:(unsigned long long)arg1;

@end
