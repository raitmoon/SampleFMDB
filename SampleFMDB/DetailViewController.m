//
//  DetailViewController.m
//  SampleFMDB
//
//  Created by tomo on 6/2/12.
//  Copyright (c) 2012 ideaxdiscovery. All rights reserved.
//

#import "DetailViewController.h"

@interface DetailViewController ()

@end

@implementation DetailViewController
@synthesize artist;
@synthesize name;
@synthesize genre;
@synthesize origin;
@synthesize yearsActive;

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
	
    name.text = artist.name;
    genre.text = artist.genre;
    origin.text = artist.origin;
    yearsActive.text = artist.yearsActive;
}

- (void)viewDidUnload
{
    [super viewDidUnload];
    // Release any retained subviews of the main view.
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation
{
    return (interfaceOrientation == UIInterfaceOrientationPortrait);
}

@end
