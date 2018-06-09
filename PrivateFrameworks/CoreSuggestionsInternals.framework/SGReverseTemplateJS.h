/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGReverseTemplateJS : NSObject <SGReverseTemplateJS> {
    NSURL * _assetPath;
    _PASNotificationToken * _assetUpdateToken;
    SGReverseTemplatesJSDataDetectors * _dd;
    JSContext * _jsContext;
    JSVirtualMachine * _jsVM;
    NSString * _localeIdentifier;
    NSMutableArray * _memoryMappedFileNames;
    NSMutableArray * _memoryMappedFiles;
    NSObject<OS_dispatch_queue> * _memoryPressureQueue;
    NSObject<OS_dispatch_source> * _memoryPressureSource;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)fakeFlightInformationWithAirlineCode:(id)arg1 flightNumber:(id)arg2 flightDate:(id)arg3;

- (void).cxx_destruct;
- (void)_handleMemoryPressureStatus:(unsigned long long)arg1;
- (id)_prepareArguments:(id)arg1;
- (id)_prepareEntity:(id)arg1;
- (id)_stringFromMemoryPressureStatus:(unsigned long long)arg1;
- (void)dealloc;
- (id)dictionaryFromTimezone:(id)arg1;
- (void)emailToJsonLd:(id)arg1 reply:(id /* block */)arg2;
- (void)emailToOutput:(id)arg1 reply:(id /* block */)arg2;
- (id)formattedDate:(id)arg1 withTimezone:(id)arg2;
- (void)freeJSContext;
- (id)getJSContext;
- (void)holdXpcTransactionForShortDelay;
- (id)init;
- (void)initCurrentAsset;
- (id)loadJSFromASCIIFile:(id)arg1;
- (id)loadTrieWithFileName:(id)arg1;
- (id)mappedArrayBufferForFileName:(id)arg1;
- (id)outputExceptionsFromOutput:(id)arg1;
- (id)payloadToOutputWithEntryPoint:(id)arg1 arguments:(id)arg2;
- (void)payloadToOutputWithEntryPoint:(id)arg1 arguments:(id)arg2 reply:(id /* block */)arg3;
- (id)processLoadRequestWithFileName:(id)arg1;
- (void)refreshAssetPath;
- (void)schemaOrgToOutput:(id)arg1 reply:(id /* block */)arg2;
- (void)setAssetPath:(id)arg1;
- (id)sfAirportToDictionnary:(id)arg1;
- (id)sfFlightStatusToString:(int)arg1;
- (id)sfFlightsToDictionnary:(id)arg1;
- (bool)shouldDownloadFull:(id)arg1;
- (void)shouldDownloadFull:(id)arg1 reply:(id /* block */)arg2;
- (void)textMessageToOutput:(id)arg1 reply:(id /* block */)arg2;

@end
