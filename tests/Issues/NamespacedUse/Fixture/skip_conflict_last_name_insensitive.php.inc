<?php

namespace Rector\Tests\Issues\NamespacedUseAutoImport\Fixture;

use Some\CLASS_;
use PhpParser\node;

final class SkipConflictLastNameUsedInsensitive
{
    /**
     * @param Node\STMT\Class_ $param
     */
    public function run($param): void
    {
        new Class_();
    }
}
