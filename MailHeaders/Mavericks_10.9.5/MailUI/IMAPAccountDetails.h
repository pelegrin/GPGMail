/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "AccountDetails.h"

@class NSButton, NSTextField;

@interface IMAPAccountDetails : AccountDetails
{
    NSButton *_compactWhenClosing;
    NSTextField *_serverPathPrefix;
    BOOL _warnedAboutCachingAndIndexing;
    NSButton *_useIDLECommand;
    NSButton *_cachePolicyCheckbox;
}

@property(nonatomic) NSButton *cachePolicyCheckbox; // @synthesize cachePolicyCheckbox=_cachePolicyCheckbox;
- (void)cachePolicyChanged:(id)arg1;
- (void)didDisplayTabViewItem:(id)arg1;
- (BOOL)isAccountInformationDirty:(id)arg1;
- (void)setUIElementsEnabled:(BOOL)arg1;
- (void)setupAccountFromValuesInUI:(id)arg1 forValidation:(BOOL)arg2;
- (void)setupUIFromValuesInAccount:(id)arg1;

@end

