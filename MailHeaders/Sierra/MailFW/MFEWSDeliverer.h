//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Mail/MFMessageDeliverer.h>

#import "MFEWSErrorHandler.h"

@class MFEWSDeliveryAccount, NSError, NSString;

@interface MFEWSDeliverer : MFMessageDeliverer <MFEWSErrorHandler>
{
    NSError *_error;	// 8 = 0x8
}

@property(retain) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;	// IMP=0x0000000000083db3
- (void)handleEWSError:(id)arg1;	// IMP=0x00000000000835d4
- (long long)deliverSynchronously;	// IMP=0x0000000000082c4e
- (id)headersForDelivery;	// IMP=0x0000000000082a61
@property(retain, nonatomic) MFEWSDeliveryAccount *account;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
