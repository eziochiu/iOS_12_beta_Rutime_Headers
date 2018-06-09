/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiMetricExtendedTrapInfo : PBCodable <NSCopying> {
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _backplanes;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _bus;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _deepSleeps;
    struct { 
        unsigned int sequence : 1; 
    }  _has;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _macEnabs;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _macs;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _memoryDumps;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _pcieQueueStates;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _phyTxErrThreshs;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _phys;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _psmWDs;
    unsigned int  _sequence;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _signatures;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _stackTraces;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _ucodeErrors;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _wlcStates;
}

@property (nonatomic, readonly) unsigned int*backplanes;
@property (nonatomic, readonly) unsigned long long backplanesCount;
@property (nonatomic, readonly) unsigned int*bus;
@property (nonatomic, readonly) unsigned long long busCount;
@property (nonatomic, readonly) unsigned int*deepSleeps;
@property (nonatomic, readonly) unsigned long long deepSleepsCount;
@property (nonatomic) bool hasSequence;
@property (nonatomic, readonly) unsigned int*macEnabs;
@property (nonatomic, readonly) unsigned long long macEnabsCount;
@property (nonatomic, readonly) unsigned int*macs;
@property (nonatomic, readonly) unsigned long long macsCount;
@property (nonatomic, readonly) unsigned int*memoryDumps;
@property (nonatomic, readonly) unsigned long long memoryDumpsCount;
@property (nonatomic, readonly) unsigned int*pcieQueueStates;
@property (nonatomic, readonly) unsigned long long pcieQueueStatesCount;
@property (nonatomic, readonly) unsigned int*phyTxErrThreshs;
@property (nonatomic, readonly) unsigned long long phyTxErrThreshsCount;
@property (nonatomic, readonly) unsigned int*phys;
@property (nonatomic, readonly) unsigned long long physCount;
@property (nonatomic, readonly) unsigned int*psmWDs;
@property (nonatomic, readonly) unsigned long long psmWDsCount;
@property (nonatomic) unsigned int sequence;
@property (nonatomic, readonly) unsigned int*signatures;
@property (nonatomic, readonly) unsigned long long signaturesCount;
@property (nonatomic, readonly) unsigned int*stackTraces;
@property (nonatomic, readonly) unsigned long long stackTracesCount;
@property (nonatomic, readonly) unsigned int*ucodeErrors;
@property (nonatomic, readonly) unsigned long long ucodeErrorsCount;
@property (nonatomic, readonly) unsigned int*wlcStates;
@property (nonatomic, readonly) unsigned long long wlcStatesCount;

- (void)addBackplane:(unsigned int)arg1;
- (void)addBus:(unsigned int)arg1;
- (void)addDeepSleep:(unsigned int)arg1;
- (void)addMac:(unsigned int)arg1;
- (void)addMacEnab:(unsigned int)arg1;
- (void)addMemoryDump:(unsigned int)arg1;
- (void)addPcieQueueState:(unsigned int)arg1;
- (void)addPhy:(unsigned int)arg1;
- (void)addPhyTxErrThresh:(unsigned int)arg1;
- (void)addPsmWD:(unsigned int)arg1;
- (void)addSignature:(unsigned int)arg1;
- (void)addStackTraces:(unsigned int)arg1;
- (void)addUcodeErrors:(unsigned int)arg1;
- (void)addWlcState:(unsigned int)arg1;
- (unsigned int)backplaneAtIndex:(unsigned long long)arg1;
- (unsigned int*)backplanes;
- (unsigned long long)backplanesCount;
- (unsigned int*)bus;
- (unsigned int)busAtIndex:(unsigned long long)arg1;
- (unsigned long long)busCount;
- (void)clearBackplanes;
- (void)clearBus;
- (void)clearDeepSleeps;
- (void)clearMacEnabs;
- (void)clearMacs;
- (void)clearMemoryDumps;
- (void)clearPcieQueueStates;
- (void)clearPhyTxErrThreshs;
- (void)clearPhys;
- (void)clearPsmWDs;
- (void)clearSignatures;
- (void)clearStackTraces;
- (void)clearUcodeErrors;
- (void)clearWlcStates;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned int)deepSleepAtIndex:(unsigned long long)arg1;
- (unsigned int*)deepSleeps;
- (unsigned long long)deepSleepsCount;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSequence;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)macAtIndex:(unsigned long long)arg1;
- (unsigned int)macEnabAtIndex:(unsigned long long)arg1;
- (unsigned int*)macEnabs;
- (unsigned long long)macEnabsCount;
- (unsigned int*)macs;
- (unsigned long long)macsCount;
- (unsigned int)memoryDumpAtIndex:(unsigned long long)arg1;
- (unsigned int*)memoryDumps;
- (unsigned long long)memoryDumpsCount;
- (void)mergeFrom:(id)arg1;
- (unsigned int)pcieQueueStateAtIndex:(unsigned long long)arg1;
- (unsigned int*)pcieQueueStates;
- (unsigned long long)pcieQueueStatesCount;
- (unsigned int)phyAtIndex:(unsigned long long)arg1;
- (unsigned int)phyTxErrThreshAtIndex:(unsigned long long)arg1;
- (unsigned int*)phyTxErrThreshs;
- (unsigned long long)phyTxErrThreshsCount;
- (unsigned int*)phys;
- (unsigned long long)physCount;
- (unsigned int)psmWDAtIndex:(unsigned long long)arg1;
- (unsigned int*)psmWDs;
- (unsigned long long)psmWDsCount;
- (bool)readFrom:(id)arg1;
- (unsigned int)sequence;
- (void)setBackplanes:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setBus:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setDeepSleeps:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setHasSequence:(bool)arg1;
- (void)setMacEnabs:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setMacs:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setMemoryDumps:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setPcieQueueStates:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setPhyTxErrThreshs:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setPhys:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setPsmWDs:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setSequence:(unsigned int)arg1;
- (void)setSignatures:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setStackTraces:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setUcodeErrors:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setWlcStates:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (unsigned int)signatureAtIndex:(unsigned long long)arg1;
- (unsigned int*)signatures;
- (unsigned long long)signaturesCount;
- (unsigned int*)stackTraces;
- (unsigned int)stackTracesAtIndex:(unsigned long long)arg1;
- (unsigned long long)stackTracesCount;
- (unsigned int*)ucodeErrors;
- (unsigned int)ucodeErrorsAtIndex:(unsigned long long)arg1;
- (unsigned long long)ucodeErrorsCount;
- (unsigned int)wlcStateAtIndex:(unsigned long long)arg1;
- (unsigned int*)wlcStates;
- (unsigned long long)wlcStatesCount;
- (void)writeTo:(id)arg1;

@end
